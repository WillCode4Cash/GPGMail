//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MailCore/MCThrowingInvocationOperation.h>

@interface MCMainThreadInvocationOperation : MCThrowingInvocationOperation
{
    BOOL _isExecuting;	// 48 = 0x30
    BOOL _isFinished;	// 49 = 0x31
}

+ (BOOL)automaticallyNotifiesObserversOfIsFinished;	// IMP=0x0000000000038068
+ (BOOL)automaticallyNotifiesObserversOfIsExecuting;	// IMP=0x0000000000037ec9
- (void)_finish;	// IMP=0x000000000003809b
- (BOOL)isFinished;	// IMP=0x0000000000038070
- (void)_setIsExecuting:(BOOL)arg1;	// IMP=0x0000000000037efc
- (BOOL)isExecuting;	// IMP=0x0000000000037ed1
- (BOOL)isConcurrent;	// IMP=0x0000000000037ebe
- (void)main;	// IMP=0x0000000000037e51
- (void)start;	// IMP=0x0000000000037b8b

@end
