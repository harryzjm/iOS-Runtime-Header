//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGExternalEnrichment-Protocol.h>

@class NSMutableArray;

@interface SGURLContainer : NSObject <SGExternalEnrichment>
{
    NSMutableArray *_urls;
}

+ (_Bool)deleteAllURLsWithBundleIdentifier:(id)arg1 entityStore:(id)arg2;
- (void).cxx_destruct;
- (void)flushWrites;
- (void)writeWithEntityStore:(id)arg1;
- (id)init;

@end
