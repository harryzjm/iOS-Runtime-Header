//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SNAUStripInfo
{
    NSString *_path;
    NSDictionary *_value;
}

+ (_Bool)containsOnlyAUStrips:(id)arg1;
@property(readonly, nonatomic) NSDictionary *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1 resourcePath:(id)arg2;

@end
