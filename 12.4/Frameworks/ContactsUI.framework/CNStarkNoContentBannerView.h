//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface CNStarkNoContentBannerView : UIView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property(retain) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *subtitleString;
@property(retain, nonatomic) NSString *titleString;
- (id)initWithFrame:(struct CGRect)arg1;

@end

