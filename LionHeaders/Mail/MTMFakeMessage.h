/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "MTMMessage.h"

@class NSDictionary;

@interface MTMFakeMessage : MTMMessage
{
    NSDictionary *_messageDescription;
}

- (id)initWithDescription:(id)arg1;
- (void)dealloc;
- (id)valueForKey:(id)arg1;
- (unsigned long long)messageFlags;
- (unsigned long long)readFlags;

@end
