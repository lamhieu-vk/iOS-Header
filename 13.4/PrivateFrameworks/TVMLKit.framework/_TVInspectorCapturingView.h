//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;
@protocol _TVInspectorCapturingViewDelegate;

@interface _TVInspectorCapturingView : UIView
{
    _Bool _testingHits;
    UILabel *_descriptionLabel;
    id <_TVInspectorCapturingViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <_TVInspectorCapturingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isTestingHits) _Bool testingHits; // @synthesize testingHits=_testingHits;
- (void)didTapView:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
@property(readonly, nonatomic) __weak UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

