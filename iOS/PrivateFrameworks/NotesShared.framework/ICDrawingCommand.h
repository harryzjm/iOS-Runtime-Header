//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICDrawingCommandData;

@interface ICDrawingCommand : NSObject
{
    _Bool _hidden;
    ICDrawingCommandData *_data;
    struct TopoID _timestamp;
}

@property(readonly, nonatomic) struct TopoID timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(readonly, nonatomic) ICDrawingCommandData *data; // @synthesize data=_data;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualDrawingCommand:(id)arg1;
- (id)initWithCommand:(id)arg1 hidden:(_Bool)arg2 timestamp:(struct TopoID)arg3;
- (unsigned int)saveToArchive:(struct Command *)arg1 sortedUUIDs:(id)arg2 withPathData:(_Bool)arg3;
- (id)initWithArchive:(const struct Command *)arg1 version:(unsigned int)arg2 sortedUUIDs:(id)arg3;

@end
