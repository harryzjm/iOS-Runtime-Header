//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSString;

@interface OKPresentationFeeder
{
    NSString *_className;
    NSMutableDictionary *_internalSettings;
}

+ (id)feederWithName:(id)arg1 className:(id)arg2 settings:(id)arg3;
@property(copy, nonatomic) NSString *className; // @synthesize className=_className;
- (void)resolveIfNeeded;
- (id)dictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 andName:(id)arg2 forPresentation:(id)arg3;
- (id)init;

@end
