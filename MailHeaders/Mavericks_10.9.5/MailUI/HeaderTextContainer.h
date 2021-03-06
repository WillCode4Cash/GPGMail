/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSTextContainer.h"

@class NSMutableSet;

@interface HeaderTextContainer : NSTextContainer
{
    NSMutableSet *_views;
}

- (BOOL)containsPoint:(struct CGPoint)arg1;
- (struct CGRect)lineFragmentRectForProposedRect:(struct CGRect)arg1 sweepDirection:(unsigned long long)arg2 movementDirection:(unsigned long long)arg3 remainingRect:(struct CGRect *)arg4;
- (BOOL)isSimpleRectangularTextContainer;
- (void)_viewFrameChanged:(id)arg1;
- (void)removeView:(id)arg1;
- (void)addView:(id)arg1;
- (void)dealloc;
- (id)initWithContainerSize:(struct CGSize)arg1;

@end

