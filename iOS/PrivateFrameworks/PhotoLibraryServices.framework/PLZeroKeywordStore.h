//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PLZeroKeywordStore : NSObject
{
    NSString *_storePath;
}

+ (id)expectedClasses;
- (void).cxx_destruct;
- (void)updateZeroKeywordsTo:(id)arg1;
- (id)currentZeroKeywords;
- (void)deleteStore;
- (id)initWithPath:(id)arg1;

@end

