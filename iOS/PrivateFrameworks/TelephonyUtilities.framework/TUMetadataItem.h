//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TUMetadataItem : NSObject
{
    NSMutableDictionary *_callMetadata;
}

@property(readonly, nonatomic) NSMutableDictionary *callMetadata; // @synthesize callMetadata=_callMetadata;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (id)description;
- (id)metadataForProvider:(Class)arg1;
- (void)setMetadata:(id)arg1 forProvider:(Class)arg2;
- (id)init;

@end

