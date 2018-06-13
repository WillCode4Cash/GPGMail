//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFMessageStore.h>

@class MFTableOfContents, NSArray, NSData;

@interface MFNeXTStore : MFMessageStore
{
    NSData *_mboxData;	// 16 = 0x10
    MFTableOfContents *_toc;	// 24 = 0x18
    BOOL _mboxIsOnSMB;	// 32 = 0x20
    BOOL _haveUpdatedMetadata;	// 33 = 0x21
    BOOL _importMode;	// 34 = 0x22
    NSData *_incomingMboxData;	// 40 = 0x28
    BOOL _rebuildingTOC;	// 48 = 0x30
}

+ (BOOL)storeAtPathIsWritable:(id)arg1;	// IMP=0x00000000001ff12e
+ (BOOL)createEmptyStoreForPath:(id)arg1;	// IMP=0x00000000001fef7b
@property BOOL rebuildingTOC; // @synthesize rebuildingTOC=_rebuildingTOC;
- (void).cxx_destruct;	// IMP=0x00000000001ff276
- (BOOL)shouldCallCompactWhenClosing;	// IMP=0x00000000001ff201
- (BOOL)isSortedAscending;	// IMP=0x00000000001ff1e4
- (id)sortOrder;	// IMP=0x00000000001ff1c7
- (void)suggestSortOrder:(id)arg1 ascending:(BOOL)arg2;	// IMP=0x00000000001ff1aa
- (long long)_writeMessagesToIncomingMail:(id)arg1 missedMessages:(id)arg2 newMessageIDs:(id)arg3;	// IMP=0x00000000001fed1b
- (void)_incorporateMailFromIncoming;	// IMP=0x00000000001fe594
- (long long)undoAppendOfLibraryIDs:(id)arg1;	// IMP=0x00000000001fe4cb
- (long long)appendMessages:(id)arg1 missedMessages:(id)arg2 newMessages:(id)arg3 newDocumentIDsByOld:(id)arg4 flagsToSet:(id)arg5 appendReason:(long long)arg6 userInitiated:(BOOL)arg7 error:(id *)arg8;	// IMP=0x00000000001fe070
- (BOOL)allowsAppend;	// IMP=0x00000000001fe055
- (long long)_appendMessages:(id)arg1 successes:(id *)arg2 failures:(id *)arg3 mboxName:(id)arg4 tableOfContents:(id)arg5;	// IMP=0x00000000001fd9d8
- (void)_addIDsForAppendedMessages:(id)arg1 toArray:(id)arg2;	// IMP=0x00000000001fd827
- (id)_appendMessage:(id)arg1 toFile:(id)arg2;	// IMP=0x00000000001fd59c
- (void)_deleteAttachments:(id)arg1;	// IMP=0x00000000001fd2e9
- (void)doCompact;	// IMP=0x00000000001fbd2b
- (BOOL)canCompact;	// IMP=0x00000000001fbb5e
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3 allowPartial:(BOOL)arg4;	// IMP=0x00000000001fb84a
- (id)_fetchHeaderDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;	// IMP=0x00000000001fb2d5
- (id)messageForMessageID:(id)arg1;	// IMP=0x00000000001fb242
- (void)_resetAllMessages;	// IMP=0x00000000001fb1d4
- (BOOL)tableOfContents:(id)arg1 loadedMessages:(id)arg2;	// IMP=0x00000000001fb14c
- (void)_flushAllMessageData;	// IMP=0x00000000001fb0ce
- (void)_rebuildTableOfContentsSynchronously;	// IMP=0x00000000001fac7a
- (BOOL)canRebuild;	// IMP=0x00000000001fac28
- (void)writeUpdatedMessageDataToDisk;	// IMP=0x00000000001fab8e
- (void)_invalidate;	// IMP=0x00000000001faafd
- (id)lockFilePath;	// IMP=0x00000000001faa7c
- (void)updateMetadata;	// IMP=0x00000000001fa938
@property(readonly, copy, nonatomic) NSArray *messagesForImporter;
- (id)incomingMessages;	// IMP=0x00000000001fa414
- (void)openSynchronouslyUpdatingMetadata:(BOOL)arg1;	// IMP=0x00000000001f9ca8
- (void)_releaseMboxData;	// IMP=0x00000000001f9c58
- (void)dealloc;	// IMP=0x00000000001f9be2
- (id)init;	// IMP=0x00000000001f9b13

@end
