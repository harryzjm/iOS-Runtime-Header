//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriVOX/NSObject-Protocol.h>

@class NSString;
@protocol SVXSystemVolumeDataSource;

@protocol SVXSystemVolumeListening <NSObject>
- (void)systemVolumeDataSource:(id <SVXSystemVolumeDataSource>)arg1 didChangeVolumeForAudioCategory:(NSString *)arg2 from:(float)arg3 toLevel:(float)arg4;
@end
