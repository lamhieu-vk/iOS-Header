//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/_MKTableViewController.h>

#import <MapKit/MKDynamicTransitUIContainer-Protocol.h>
#import <MapKit/MKStackingViewControllerPreferredSizeUse-Protocol.h>

@class MKTransitItemIncidentsController, NSDate, NSString;
@protocol GEOTransitLineItem, MKTransitLineIncidentsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface MKTransitLineIncidentsViewController : _MKTableViewController <MKDynamicTransitUIContainer, MKStackingViewControllerPreferredSizeUse>
{
    MKTransitItemIncidentsController *_incidentsController;
    id <GEOTransitLineItem> _lineItem;
    NSDate *_referenceDate;
    id <MKTransitLineIncidentsViewControllerDelegate> _incidentsDelegate;
}

@property(nonatomic) __weak id <MKTransitLineIncidentsViewControllerDelegate> incidentsDelegate; // @synthesize incidentsDelegate=_incidentsDelegate;
@property(readonly, nonatomic) id <GEOTransitLineItem> lineItem; // @synthesize lineItem=_lineItem;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_dismissTransitIncidents;
- (void)_moreIncidentDetailsSelected;
- (id)_headerView;
- (id)_incidentCellForRow:(long long)arg1;
- (id)_incidents;
@property(readonly, copy, nonatomic) NSDate *referenceDate; // @synthesize referenceDate=_referenceDate;
- (void)viewDidLayoutSubviews;
@property(readonly, nonatomic) _Bool requiresPreferredContentSizeInStackingView;
- (void)transitUIReferenceTimeUpdated:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithLineItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

