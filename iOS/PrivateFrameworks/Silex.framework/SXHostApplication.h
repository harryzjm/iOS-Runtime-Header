//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIApplication;

@interface SXHostApplication
{
    UIApplication *_application;
}

@property(nonatomic) __weak UIApplication *application; // @synthesize application=_application;
- (void).cxx_destruct;
- (_Bool)canOpenURL:(id)arg1;
- (void)openURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)active;
- (id)initWithApplication:(id)arg1;

@end
