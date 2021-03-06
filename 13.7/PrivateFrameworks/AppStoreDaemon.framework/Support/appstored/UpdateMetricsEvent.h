//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSMetricsEvent.h>

@class NSDate;

@interface UpdateMetricsEvent : AMSMetricsEvent
{
    double _averageTimeBetweenPolls;
    NSDate *_lastPollDate;
    double _meanTimeToDiscovery;
    double _meanTimeToDownload;
    double _meanTimeToInstall;
    double _meanTimeToTransaction;
}

+ (id)_defaultProperties;
- (void).cxx_destruct;
@property(nonatomic) double meanTimeToTransaction; // @synthesize meanTimeToTransaction=_meanTimeToTransaction;
@property(nonatomic) double meanTimeToInstall; // @synthesize meanTimeToInstall=_meanTimeToInstall;
@property(nonatomic) double meanTimeToDownload; // @synthesize meanTimeToDownload=_meanTimeToDownload;
@property(nonatomic) double meanTimeToDiscovery; // @synthesize meanTimeToDiscovery=_meanTimeToDiscovery;
@property(copy, nonatomic) NSDate *lastPollDate; // @synthesize lastPollDate=_lastPollDate;
@property(nonatomic) double averageTimeBetweenPolls; // @synthesize averageTimeBetweenPolls=_averageTimeBetweenPolls;
- (id)description;
- (_Bool)requiresDiagnosticSendingPermission;
- (id)initWithTopic:(id)arg1;

@end

