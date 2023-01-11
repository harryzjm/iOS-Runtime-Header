//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PHResourceLocalAvailabilityRequest;

__attribute__((visibility("hidden")))
@interface PUPhotosGridDownloadHelpContext : NSObject
{
    PHResourceLocalAvailabilityRequest *_resourceLocalAvailabilityRequest;
    NSString *_gridProgressIdentifier;
    CDUnknownBlockType _downloadHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType downloadHandler; // @synthesize downloadHandler=_downloadHandler;
@property(retain, nonatomic) NSString *gridProgressIdentifier; // @synthesize gridProgressIdentifier=_gridProgressIdentifier;
@property(retain, nonatomic) PHResourceLocalAvailabilityRequest *resourceLocalAvailabilityRequest; // @synthesize resourceLocalAvailabilityRequest=_resourceLocalAvailabilityRequest;

@end
