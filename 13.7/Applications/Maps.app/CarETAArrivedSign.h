//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CarETACardSign-Protocol.h"

@class CarCardRoundedButton, GuidanceETA, NSArray, NSString;
@protocol CarETACardSignDelegate;

__attribute__((visibility("hidden")))
@interface CarETAArrivedSign : UIView <CarETACardSign>
{
    GuidanceETA *_latestETA;
    id <CarETACardSignDelegate> _delegate;
    CarCardRoundedButton *_endRouteButton;
}

+ (_Bool)requiresConstraintBasedLayout;
- (void).cxx_destruct;
@property(retain, nonatomic) CarCardRoundedButton *endRouteButton; // @synthesize endRouteButton=_endRouteButton;
@property(nonatomic) __weak id <CarETACardSignDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GuidanceETA *latestETA; // @synthesize latestETA=_latestETA;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) NSArray *focusOrderSubItems;
- (void)_onEndPressed:(id)arg1;
- (void)_setupStyling;
- (void)_setupConstraints;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

