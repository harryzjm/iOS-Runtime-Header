//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary, NSString;

@interface OKPresentationCouchStep
{
    NSMutableDictionary *_internalSettings;
    _Bool _ignoresBusiness;
    NSString *_anchorPage;
    NSString *_script;
    double _duration;
    NSArray *_dependencies;
}

+ (id)couchStepWithAnchorPageName:(id)arg1 script:(id)arg2 duration:(double)arg3 settings:(id)arg4;
@property(nonatomic) _Bool ignoresBusiness; // @synthesize ignoresBusiness=_ignoresBusiness;
@property(copy, nonatomic) NSArray *dependencies; // @synthesize dependencies=_dependencies;
@property(readonly) double duration; // @synthesize duration=_duration;
@property(readonly) NSString *script; // @synthesize script=_script;
@property(readonly) NSString *anchorPage; // @synthesize anchorPage=_anchorPage;
- (void)resolveIfNeeded;
- (id)parentCouch;
- (id)dictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 forPresentation:(id)arg2 andCouch:(id)arg3;
- (id)init;

@end

