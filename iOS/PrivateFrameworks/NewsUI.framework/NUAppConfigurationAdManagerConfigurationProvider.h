//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsUI/NUAdManagerConfigurationProvider-Protocol.h>

@class FCAppConfigurationManager, NSString;

@interface NUAppConfigurationAdManagerConfigurationProvider : NSObject <NUAdManagerConfigurationProvider>
{
    FCAppConfigurationManager *_appConfigurationManager;
}

@property(readonly, nonatomic) FCAppConfigurationManager *appConfigurationManager; // @synthesize appConfigurationManager=_appConfigurationManager;
- (void).cxx_destruct;
- (void)fetchConfigurationWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithAppConfigurationManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

