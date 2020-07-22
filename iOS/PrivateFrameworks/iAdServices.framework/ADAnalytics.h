//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iAdServices/ADAdSheetConnectionDelegate-Protocol.h>
#import <iAdServices/ADAdSheetProxyDelegate-Protocol.h>

@class ADAdSheetConnection, NSString;

@interface ADAnalytics : NSObject <ADAdSheetConnectionDelegate, ADAdSheetProxyDelegate>
{
    ADAdSheetConnection *_connection;
}

+ (id)sharedInstance;
@property(retain, nonatomic) ADAdSheetConnection *connection; // @synthesize connection=_connection;
- (id)additionalAdSheetLaunchOptions;
- (_Bool)shouldLaunchAdSheet;
- (void)configureConnection:(id)arg1;
- (id)adSheetMachServiceName;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
