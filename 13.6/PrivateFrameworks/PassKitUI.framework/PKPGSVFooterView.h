//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class PKContinuousButton;
@protocol PKPGSVFooterViewDelegate;

@interface PKPGSVFooterView : UIView
{
    PKContinuousButton *_editButton;
    id <PKPGSVFooterViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PKPGSVFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_editTapped:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

