//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MCDetailsDescriptionView : UIView
{
    NSArray *_information;
    NSMutableArray *_labels;
    NSMutableArray *_fields;
    struct CGSize *_sizes;
    unsigned long long _sizesCount;
    double _idealHeight;
    _Bool _usesDynamicAlignment;
    double _labelMaxWidth;
}

- (void).cxx_destruct;
- (void)setUsesDynamicAlignment:(_Bool)arg1;
- (double)heightForTableView;
- (void)drawRect:(struct CGRect)arg1;
- (void)_calculateHeightsForFrame:(struct CGRect)arg1;
- (id)_valueFont;
- (id)_labelFont;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 data:(id)arg2;

@end

