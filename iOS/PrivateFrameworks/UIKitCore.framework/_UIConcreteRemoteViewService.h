//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSExtension, NSUUID;
@protocol PKPlugIn;

__attribute__((visibility("hidden")))
@interface _UIConcreteRemoteViewService
{
    _Bool _overridesHostAppearance;
    NSUUID *_contextToken;
    NSExtension *_extension;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
- (_Bool)overridesHostAppearance;
- (id)contextToken;
- (void)endUsing:(CDUnknownBlockType)arg1;
- (void)beginUsing:(CDUnknownBlockType)arg1;
- (id)viewControllerClassName;
- (int)processIdentifier;
- (id)multipleInstanceUUID;
- (_Bool)multipleInstances;
- (id)xpcServiceNameRoot;
- (id)identifier;
@property(retain, nonatomic) id <PKPlugIn> plugin;
- (void)updateOverridesHostAppearance;
- (id)initWithExtension:(id)arg1 andContextToken:(id)arg2;

@end
