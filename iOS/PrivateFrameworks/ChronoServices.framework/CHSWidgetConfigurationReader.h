//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CHSChronoWidgetServiceServer;

@interface CHSWidgetConfigurationReader : NSObject
{
    id <CHSChronoWidgetServiceServer> _server;
}

- (void).cxx_destruct;
- (id)_transformResults:(id)arg1;
- (void)allConfiguredWidgetsWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end
