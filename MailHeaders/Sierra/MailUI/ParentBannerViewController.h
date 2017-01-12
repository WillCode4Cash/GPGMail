//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BannerViewController.h"

@class BannerImageView, NSButton, NSMutableArray, NSString, NSTextField;

@interface ParentBannerViewController : BannerViewController
{
    NSMutableArray *_requestedAddresses;	// 104 = 0x68
    BOOL _requestIsForSenders;	// 112 = 0x70
    BannerImageView *_icon;	// 120 = 0x78
    NSTextField *_messageField;	// 128 = 0x80
    NSButton *_helpButton;	// 136 = 0x88
    NSButton *_respondButton;	// 144 = 0x90
    NSString *_childAddress;	// 152 = 0x98
    long long _permissionRequestState;	// 160 = 0xa0
}

@property(nonatomic) long long permissionRequestState; // @synthesize permissionRequestState=_permissionRequestState;
@property(nonatomic) __weak NSString *childAddress; // @synthesize childAddress=_childAddress;
@property(nonatomic) BOOL requestIsForSenders; // @synthesize requestIsForSenders=_requestIsForSenders;
@property(nonatomic) __weak NSButton *respondButton; // @synthesize respondButton=_respondButton;
@property(nonatomic) __weak NSButton *helpButton; // @synthesize helpButton=_helpButton;
@property(nonatomic) __weak NSTextField *messageField; // @synthesize messageField=_messageField;
@property(nonatomic) __weak BannerImageView *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;	// IMP=0x00000001002692f6
- (void)rejectChildRequest:(id)arg1;	// IMP=0x0000000100269158
- (void)approveChildRequest:(id)arg1;	// IMP=0x00000001002690a9
- (void)updateBannerContents;	// IMP=0x0000000100268970
- (void)updateWantsDisplay;	// IMP=0x000000010004aa32
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001002688a8
- (void)setRepresentedObject:(id)arg1;	// IMP=0x000000010004a947
- (void)dealloc;	// IMP=0x00000001000b5edf
- (void)_parentBannerViewControllerCommonInit;	// IMP=0x0000000100268870
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010026882b
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001002687b9

@end
