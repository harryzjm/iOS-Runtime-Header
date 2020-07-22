//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSUserDefaults;

@interface StocksPreferences : NSObject
{
    _Bool _changeColorSwapped;
    unsigned long long _textDirection;
    NSUserDefaults *_sharedDefaults;
    _Bool _textAttachmentDirectionIsRightToLeft;
}

+ (void)clearSharedPreferences;
+ (id)sharedPreferences;
@property(readonly, nonatomic) _Bool textAttachmentDirectionIsRightToLeft; // @synthesize textAttachmentDirectionIsRightToLeft=_textAttachmentDirectionIsRightToLeft;
@property(readonly, nonatomic) unsigned long long textDirection; // @synthesize textDirection=_textDirection;
@property(readonly, nonatomic, getter=isChangeColorSwapped) _Bool changeColorSwapped; // @synthesize changeColorSwapped=_changeColorSwapped;
- (void).cxx_destruct;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)synchronize;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (_Bool)boolForKey:(id)arg1;
- (void)resetLocale;
- (id)localSharedDefaults;
- (id)init;

@end

