//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FTServiceStatus : NSObject
{
    unsigned long long _supportedServicesFlags;
    int _supportedServicesToken;
    _Bool _blockPost;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool blockPost; // @synthesize blockPost=_blockPost;
@property unsigned long long supportedServicesFlags; // @synthesize supportedServicesFlags=_supportedServicesFlags;
@property(nonatomic) int supportedServicesToken; // @synthesize supportedServicesToken=_supportedServicesToken;
- (unsigned long long)_noCache_supportedServicesFlags;
- (void)_removeObservers;
- (void)_addObservers;
- (void)_reload;
@property(readonly, nonatomic) _Bool faceTimeMultiwaySupported;
@property(readonly, nonatomic) _Bool faceTimeAudioSupported;
@property(readonly, nonatomic) _Bool iMessageSupported;
- (void)dealloc;
- (id)initPrivate;

@end
