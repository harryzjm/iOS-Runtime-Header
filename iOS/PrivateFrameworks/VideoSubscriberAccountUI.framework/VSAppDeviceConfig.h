//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccountUI/IKAppDeviceConfig-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VSAppDeviceConfig : NSObject <IKAppDeviceConfig>
{
}

- (id)timeZone;
- (id)storeFrontCountryCode;
- (id)systemLanguage;
- (_Bool)isTimeZoneSet;
- (struct CGSize)screenSize;
- (unsigned long long)preferredVideoPreviewFormat;
- (unsigned long long)preferredVideoFormat;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

