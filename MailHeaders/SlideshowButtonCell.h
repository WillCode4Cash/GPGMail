/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSButtonCell.h"

@interface SlideshowButtonCell : NSButtonCell
{
    struct CGSize _labelSize;
}

- (id)initWithTitle:(id)arg1 alternateTitle:(id)arg2;
- (void)_calcLabelSize;
- (void)setFont:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;

@end
