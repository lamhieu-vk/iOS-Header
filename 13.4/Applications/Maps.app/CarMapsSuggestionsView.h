//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CarETAOnlyGuidanceSign, GuidanceETA, MNCommuteDestination, NSArray, NSTimer, UILabel;

__attribute__((visibility("hidden")))
@interface CarMapsSuggestionsView : UIView
{
    _Bool _showSelectLabel;
    _Bool _navigationAidedDrivingEnabled;
    _Bool _routeIsNavigable;
    MNCommuteDestination *_currentCommuteDestination;
    GuidanceETA *_currentETA;
    CarETAOnlyGuidanceSign *_etaOnlyView;
    UILabel *_selectLabel;
    NSArray *_currentConstraints;
    NSTimer *_hideSelectLabelTimer;
    NSTimer *_layoutUpdateTimer;
    unsigned long long _suggestionKey;
    CDStruct_24a8a0a7 _lastLayoutConfig;
}

+ (_Bool)requiresConstraintBasedLayout;
- (void).cxx_destruct;
@property(nonatomic) _Bool routeIsNavigable; // @synthesize routeIsNavigable=_routeIsNavigable;
@property(nonatomic) _Bool navigationAidedDrivingEnabled; // @synthesize navigationAidedDrivingEnabled=_navigationAidedDrivingEnabled;
@property(nonatomic) _Bool showSelectLabel; // @synthesize showSelectLabel=_showSelectLabel;
@property unsigned long long suggestionKey; // @synthesize suggestionKey=_suggestionKey;
@property CDStruct_24a8a0a7 lastLayoutConfig; // @synthesize lastLayoutConfig=_lastLayoutConfig;
@property(retain) NSTimer *layoutUpdateTimer; // @synthesize layoutUpdateTimer=_layoutUpdateTimer;
@property(retain) NSTimer *hideSelectLabelTimer; // @synthesize hideSelectLabelTimer=_hideSelectLabelTimer;
@property(retain) NSArray *currentConstraints; // @synthesize currentConstraints=_currentConstraints;
@property(retain) UILabel *selectLabel; // @synthesize selectLabel=_selectLabel;
@property(retain) CarETAOnlyGuidanceSign *etaOnlyView; // @synthesize etaOnlyView=_etaOnlyView;
@property(retain, nonatomic) GuidanceETA *currentETA; // @synthesize currentETA=_currentETA;
@property(retain, nonatomic) MNCommuteDestination *currentCommuteDestination; // @synthesize currentCommuteDestination=_currentCommuteDestination;
- (void)_hideSelectLabel;
- (void)stopHideSelectLabelTimer;
- (void)startHideSelectLabelTimer;
- (void)_updateContents;
- (void)_updateViewLayout;
- (_Bool)_needsViewLayout;
- (void)_setNeedsViewLayout;
- (void)_externalDeviceUpdated:(id)arg1;
- (void)dealloc;
- (id)init;

@end

