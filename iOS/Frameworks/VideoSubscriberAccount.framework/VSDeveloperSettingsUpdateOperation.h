//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VSDeveloperServiceConnection, VSDeveloperSettings, VSOptional;

@interface VSDeveloperSettingsUpdateOperation
{
    VSDeveloperSettings *_settings;
    VSOptional *_result;
    VSDeveloperServiceConnection *_connection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VSDeveloperServiceConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
@property(copy, nonatomic) VSDeveloperSettings *settings; // @synthesize settings=_settings;
- (void)executionDidBegin;
- (id)init;
- (id)initWithSettings:(id)arg1;

@end
