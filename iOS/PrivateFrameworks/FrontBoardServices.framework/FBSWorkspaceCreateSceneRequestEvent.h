//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FBSSceneClientSettingsDiff, NSString;

@interface FBSWorkspaceCreateSceneRequestEvent
{
    NSString *_identifier;
    FBSSceneClientSettingsDiff *_clientSettings;
}

@property(retain, nonatomic) FBSSceneClientSettingsDiff *clientSettingsDiff; // @synthesize clientSettingsDiff=_clientSettings;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)dealloc;

@end

