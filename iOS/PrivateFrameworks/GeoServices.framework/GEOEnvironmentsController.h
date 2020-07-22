//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol GEOEnvironmentsControllerDelegate;

@interface GEOEnvironmentsController : NSObject
{
    NSArray *_defaultEnvironmentInfos;
    NSArray *_environmentInfos;
    NSArray *_customEnvironmentInfos;
    _Bool _enableCustomEnvironments;
    id <GEOEnvironmentsControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <GEOEnvironmentsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeCustomEnvironment:(id)arg1;
- (void)addCustomEnvironment:(id)arg1;
- (id)environmentInfosForSection:(long long)arg1;
- (void)reloadEnvironments:(CDUnknownBlockType)arg1;
- (void)reloadEnvironments;
- (void)dealloc;
- (id)initEnablingCustomEnvironments:(_Bool)arg1;

@end

