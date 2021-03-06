//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MapsThemeViewController.h"

@class NSArray, UILabel;
@protocol NavHeadingViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface NavHeadingViewController : MapsThemeViewController
{
    _Bool _hidden;
    id <NavHeadingViewControllerDelegate> _delegate;
    double _heading;
    NSArray *_compassPointLocalizedAbbreviations;
    UILabel *_headingLabel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(retain, nonatomic) UILabel *headingLabel; // @synthesize headingLabel=_headingLabel;
@property(retain, nonatomic) NSArray *compassPointLocalizedAbbreviations; // @synthesize compassPointLocalizedAbbreviations=_compassPointLocalizedAbbreviations;
@property(nonatomic) double heading; // @synthesize heading=_heading;
@property(nonatomic) __weak id <NavHeadingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (id)stringWithHeading:(double)arg1;
- (void)setupConstraints;
- (void)updateTheme;
- (void)createHeadingLabelIfNeeded;
- (void)viewDidLoad;
- (id)init;
- (_Bool)_canShowWhileLocked;

@end

