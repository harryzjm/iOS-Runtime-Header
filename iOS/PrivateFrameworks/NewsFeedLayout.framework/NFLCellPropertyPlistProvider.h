//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface NFLCellPropertyPlistProvider : NSObject
{
    NSMutableDictionary *_plistsByName;
}

@property(retain, nonatomic) NSMutableDictionary *plistsByName; // @synthesize plistsByName=_plistsByName;
- (void).cxx_destruct;
- (id)plistWithName:(id)arg1;
- (id)init;

@end

