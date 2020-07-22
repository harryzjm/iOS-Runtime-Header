//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LSPlugInKitProxy, NSExtension, NSNumber, NSUUID;
@protocol PKPlugIn;

@interface IMBalloonAppExtension
{
    _Bool _canSendDataPayloads;
    _Bool _shouldBalloonHideAppIcon;
    NSExtension *_extension;
    LSPlugInKitProxy *_proxy;
    NSUUID *_requestIdentifier;
}

@property(nonatomic) _Bool shouldBalloonHideAppIcon; // @synthesize shouldBalloonHideAppIcon=_shouldBalloonHideAppIcon;
@property(nonatomic) _Bool canSendDataPayloads; // @synthesize canSendDataPayloads=_canSendDataPayloads;
@property NSUUID *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain, nonatomic) LSPlugInKitProxy *proxy; // @synthesize proxy=_proxy;
@property(readonly, retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSNumber *itemID;
@property(readonly, nonatomic) _Bool isLaunchProhibited;
@property(readonly, retain, nonatomic) id <PKPlugIn> plugin;
- (_Bool)isBetaPlugin;
- (id)version;
- (id)proxyWithErrorHandle:(CDUnknownBlockType)arg1;
- (id)extensionConnection;
- (id)initWithPluginBundle:(id)arg1 appBundle:(id)arg2;
- (id)_initWithPluginBundle:(id)arg1 extension:(id)arg2 pluginKitProxyClass:(Class)arg3;
- (id)initWithPluginBundle:(id)arg1 extension:(id)arg2;
- (id)initWithPluginBundle:(id)arg1 pluginKitProxy:(id)arg2 extension:(id)arg3;

@end
