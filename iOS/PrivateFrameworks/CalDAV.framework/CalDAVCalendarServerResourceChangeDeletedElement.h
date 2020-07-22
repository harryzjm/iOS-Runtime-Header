//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICSDateValue, NSString;

@interface CalDAVCalendarServerResourceChangeDeletedElement
{
    _Bool _hadMoreInstances;
    NSString *_componentType;
    NSString *_summary;
    NSString *_displayName;
    ICSDateValue *_nextInstance;
}

@property(nonatomic) _Bool hadMoreInstances; // @synthesize hadMoreInstances=_hadMoreInstances;
@property(retain, nonatomic) ICSDateValue *nextInstance; // @synthesize nextInstance=_nextInstance;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSString *componentType; // @synthesize componentType=_componentType;
- (void).cxx_destruct;
- (id)copyParseRules;
- (void)setDeletedDetails:(id)arg1;
- (id)init;

@end

