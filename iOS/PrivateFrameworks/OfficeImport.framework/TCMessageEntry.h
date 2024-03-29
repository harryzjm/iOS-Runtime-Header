//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface TCMessageEntry : NSObject
{
    unsigned long long m_timeStamp;
    int m_tag;
    NSString *m_text;
    NSArray *m_parameters;
    NSMutableArray *m_affectedObjects;
    int m_count;
    NSString *additionalText;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=m_timeStamp;
@property(copy, nonatomic) NSString *additionalText; // @synthesize additionalText;
- (void)addAffectedObject:(id)arg1;
- (void)mergeEntries:(id)arg1;
- (id)description;
- (long long)timeStampCompare:(id)arg1;
- (int)getCount;
- (id)affectedObjects;
- (id)getParameter:(unsigned int)arg1;
- (unsigned long long)getParameterCount;
- (id)getAdditionalText;
- (id)getMessageText;
- (int)getMessageTag;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTag:(int)arg1 affectedObject:(id)arg2 text:(id)arg3 parameters:(char *)arg4;

@end

