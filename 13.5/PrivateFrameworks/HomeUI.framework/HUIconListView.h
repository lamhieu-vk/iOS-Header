//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

@interface HUIconListView : UIView
{
    NSArray *_iconDescriptors;
    NSMutableArray *_iconViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *iconViews; // @synthesize iconViews=_iconViews;
@property(retain, nonatomic) NSArray *iconDescriptors; // @synthesize iconDescriptors=_iconDescriptors;
- (void)_prepareIconArray;
- (void)_addIconWithDescriptor:(id)arg1;
- (void)_addIconNamed:(id)arg1;
- (void)_layoutRightToLeft;
- (void)_layoutLeftToRight;
- (void)layoutSubviews;
- (void)_setUpIcons;
- (id)init;

@end

