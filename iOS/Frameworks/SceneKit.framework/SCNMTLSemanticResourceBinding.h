//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface SCNMTLSemanticResourceBinding
{
    struct {
        CDUnknownBlockType _field1;
        unsigned int _field2;
        unsigned int _field3;
    } *_semantics;
    long long semanticsCount;
    long long bufferSize;
}

@property(nonatomic) long long bufferSize; // @synthesize bufferSize;
@property(nonatomic) long long semanticsCount; // @synthesize semanticsCount;
- (void)dealloc;

@end

