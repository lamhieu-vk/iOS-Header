//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioToolboxCore/_AURemoteParameterSynchronization-Protocol.h>

@class MIDICIProfile, NSArray;

@protocol AUAudioUnitHostProtocol <_AURemoteParameterSynchronization>
- (void)MIDICIProfileChanged:(unsigned char)arg1 channel:(unsigned char)arg2 profile:(MIDICIProfile *)arg3 enabled:(_Bool)arg4;
- (void)propertiesChanged:(NSArray *)arg1;
@end

