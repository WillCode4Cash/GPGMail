//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject-Protocol.h"

@class MFEWSBodyFetchOperation, NSArray, NSDictionary;

@protocol MFEWSBodyFetchOperationDelegate <NSObject>
- (void)bodyFetchOperation:(MFEWSBodyFetchOperation *)arg1 didFetchBodiesByMessage:(NSDictionary *)arg2 calendarEventsByMessage:(NSDictionary *)arg3 missedMessages:(NSArray *)arg4;
@end
