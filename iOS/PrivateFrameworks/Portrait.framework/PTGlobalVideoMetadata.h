//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol PTSerializable;

@interface PTGlobalVideoMetadata : NSObject
{
    NSObject<PTSerializable> *_atoms[5];
}

+ (id)deserializeMetadataWithType:(unsigned int)arg1 fromGlobalMetadata:(id)arg2 error:(id *)arg3;
+ (void)initialize;
- (void).cxx_destruct;
- (unsigned int)_sizeOfAtomOfType:(unsigned int)arg1 withOptions:(id)arg2;
- (_Bool)writeToData:(id)arg1 withOptions:(id)arg2;
- (unsigned int)sizeOfSerializedObjectWithOptions:(id)arg1;
- (void)setMetadata:(id)arg1 ofType:(unsigned int)arg2;

@end
