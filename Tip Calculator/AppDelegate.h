//
//  AppDelegate.h
//  Tip Calculator
//
//  Created by Nathan Hsu on 2018-02-23.
//  Copyright © 2018 Nathan Hsu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

