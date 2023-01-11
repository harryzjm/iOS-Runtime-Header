//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>

@class NSSet;
@protocol RERelevanceEnginePreferencesDelegate;

@interface RERelevanceEnginePreferences : NSObject <NSCopying>
{
    id <RERelevanceEnginePreferencesDelegate> _delegate;
    NSSet *_disabledDataSourceIdentifiers;
    unsigned long long _mode;
}

+ (id)defaultPreferences;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(copy, nonatomic) NSSet *disabledDataSourceIdentifiers; // @synthesize disabledDataSourceIdentifiers=_disabledDataSourceIdentifiers;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;
@property(nonatomic) __weak id <RERelevanceEnginePreferencesDelegate> delegate;

@end

