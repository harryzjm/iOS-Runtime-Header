//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPUAProgressItem : NSObject
{
    unsigned int _expectedCount;
    unsigned int _completeCount;
    unsigned int _errorCount;
    unsigned int _deleteCount;
    NSString *_bundleID;
    NSString *_uaID;
    NSString *_relatedID;
}

+ (void)queueRelatedDelete:(id)arg1 forBundleID:(id)arg2;
+ (void)initialize;
@property(nonatomic) unsigned int deleteCount; // @synthesize deleteCount=_deleteCount;
@property(nonatomic) unsigned int errorCount; // @synthesize errorCount=_errorCount;
@property(nonatomic) unsigned int completeCount; // @synthesize completeCount=_completeCount;
@property(nonatomic) unsigned int expectedCount; // @synthesize expectedCount=_expectedCount;
@property(retain, nonatomic) NSString *relatedID; // @synthesize relatedID=_relatedID;
@property(retain, nonatomic) NSString *uaID; // @synthesize uaID=_uaID;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (void)update:(int)arg1;
- (void)add;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithBundleID:(id)arg1 uaID:(id)arg2 relatedID:(id)arg3;

@end
