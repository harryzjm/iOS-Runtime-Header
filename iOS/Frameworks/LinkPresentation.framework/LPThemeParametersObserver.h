//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;

__attribute__((visibility("hidden")))
@interface LPThemeParametersObserver : NSObject
{
    NSHashTable *_clients;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)didChangeThemeParameters;
- (void)addClient:(id)arg1;
- (void)didChangeDarkenColorsStatus:(id)arg1;
- (void)didChangeContentSizeCategory:(id)arg1;
- (void)dealloc;
- (id)init;

@end
