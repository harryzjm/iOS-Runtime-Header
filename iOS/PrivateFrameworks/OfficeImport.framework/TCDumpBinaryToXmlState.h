//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TCDumpBinaryToXmlState : NSObject
{
    NSString *mCurrentFieldName;
    NSMutableDictionary *mFieldNameToValueMap;
}

- (void).cxx_destruct;
- (id)valueForField:(id)arg1;
- (id)valueForCurrentField;
- (void)cacheValueforCurrentField:(id)arg1;
- (void)setCurrentField:(id)arg1;
- (id)init;

@end
