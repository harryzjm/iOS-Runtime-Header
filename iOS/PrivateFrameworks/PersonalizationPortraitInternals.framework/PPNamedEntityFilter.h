//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

@interface PPNamedEntityFilter : NSObject
{
    MLModel *_model;
}

- (void).cxx_destruct;
- (_Bool)isAcceptableRecord:(id)arg1;
- (id)filterNamedEntityRecords:(id)arg1;
- (id)filterScoredNamedEntities:(id)arg1;
- (id)init;
- (id)initWithModel:(id)arg1;

@end
