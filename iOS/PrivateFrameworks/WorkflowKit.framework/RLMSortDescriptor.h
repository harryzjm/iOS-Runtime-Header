//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface RLMSortDescriptor : NSObject
{
    _Bool _ascending;
    NSString *_keyPath;
}

+ (id)sortDescriptorWithProperty:(id)arg1 ascending:(_Bool)arg2;
+ (id)sortDescriptorWithKeyPath:(id)arg1 ascending:(_Bool)arg2;
@property(readonly, nonatomic) _Bool ascending; // @synthesize ascending=_ascending;
@property(readonly, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *property;
- (id)reversedSortDescriptor;

@end
