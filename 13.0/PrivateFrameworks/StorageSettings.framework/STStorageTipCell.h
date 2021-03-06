//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class NSMutableArray, NSString, STStorageProgressView, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface STStorageTipCell : PSTableCell
{
    NSMutableArray *_constraints;
    UIImageView *_appIconView;
    UILabel *_titleLabel;
    UIImageView *_checkIconView;
    UIButton *_enableButton;
    UIActivityIndicatorView *_spinner;
    UILabel *_progressLabel;
    STStorageProgressView *_progressView;
    _Bool _isOption;
    float _percent;
    NSString *_hformat;
    NSString *_h2format;
    double _titleWidth;
    double _enableWidth;
    double _progressWidth;
    double _nativeSpinnerWidth;
    float _prevPercent;
}

- (void).cxx_destruct;
- (void)_activateOption;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end

