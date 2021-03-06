//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (HealthKit)
+ (id)hk_tapToRadarURLForBundleID:(id)arg1 component:(unsigned long long)arg2 title:(id)arg3 description:(id)arg4 classification:(long long)arg5 reproducibility:(long long)arg6 keywords:(id)arg7 autoDiagnostics:(long long)arg8 attachments:(id)arg9;
+ (id)hk_tapToHealthRadarURLForComponent:(unsigned long long)arg1 title:(id)arg2 description:(id)arg3 classification:(long long)arg4 reproducibility:(long long)arg5 keywords:(id)arg6 autoDiagnostics:(long long)arg7 attachments:(id)arg8;
+ (id)hk_tapToHealthRadarURLWithTitle:(id)arg1 description:(id)arg2 classification:(long long)arg3 reproducibility:(long long)arg4 keywords:(id)arg5 autoDiagnostics:(long long)arg6 attachments:(id)arg7;
+ (id)hk_safeURLWithString:(id)arg1;
+ (id)_hk_urlForAtrialFibrillationEventType;
+ (id)_hk_urlForElectrocardiogramType;
+ (id)_hk_urlForHealthRecordsProviderSearch;
+ (id)_hk_urlForViewHealthRecords;
- (_Bool)hk_isValidSafariViewControllerURL;
- (_Bool)hk_hasBaseURL:(id)arg1 error:(id *)arg2;
- (id)hk_valueForFirstInstanceOfParameterNamed:(id)arg1;
@end

