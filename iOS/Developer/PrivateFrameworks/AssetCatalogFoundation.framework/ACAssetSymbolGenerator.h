//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ACAssetSymbolGenerator : NSObject
{
}

+ (id)defaultOptions;
- (void).cxx_destruct;
- (id)init;
- (id)generateObjCCode:(id)arg1 options:(id)arg2;
- (id)generateSwiftCode:(id)arg1 options:(id)arg2;
- (id)parseQualifiedNames:(id)arg1;
- (id)createObjCSymbolForAssetName:(id)arg1;
- (id)createSwiftSymbolForAssetName:(id)arg1 casing:(long long)arg2;
- (id)splitIntoWords:(id)arg1;

@end

