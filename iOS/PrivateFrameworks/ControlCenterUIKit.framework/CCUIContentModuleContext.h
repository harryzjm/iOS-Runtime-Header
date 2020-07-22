//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CCUIContentModuleContextDelegate;

@interface CCUIContentModuleContext : NSObject
{
    NSString *_moduleIdentifier;
    id <CCUIContentModuleContextDelegate> _delegate;
}

+ (void)initialize;
+ (id)_sharedOpenApplicationOptions;
+ (id)_sharedOpenAppService;
@property(nonatomic) __weak id <CCUIContentModuleContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *moduleIdentifier; // @synthesize moduleIdentifier=_moduleIdentifier;
- (void).cxx_destruct;
- (void)dismissModule;
- (void)requestExpandModule;
- (void)enqueueStatusUpdate:(id)arg1;
- (void)openApplication:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)openApplication:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestAuthenticationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithModuleIdentifier:(id)arg1;

@end

